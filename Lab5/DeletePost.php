<?php 

$servername ="mysql.eecs.ku.edu";
$myname = "ctan";
$mypassword = "qCJ6YMu6KuMFXyXq";
$databasename = "ctan";
$mysqli = new mysqli($servername, $myname, $mypassword, $databasename );

/* check connection */
if ($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
}

// $select = '<input type="checkbox" name="DeletePost[]" value="">';
if(!isset($_POST['submit']))
{
  $query = "SELECT * FROM Posts";
  $result = $mysqli->query($query);
  if($result->num_rows>0)
  { 
    echo '<center><h2>Here is the List of all Posts</h2></center>';
    echo "<center><table border=\"1\">";
    echo "<tr>";
    echo "<th>Post id </th>";
    echo "<th>Content </th>";
    echo "<th>Author ID </th>";
    echo "<th>Delete?</th>";
    echo "</tr>";
    while($row = $result->fetch_assoc())
    {
      echo "<tr>";
      echo "<td>" .$row["post_id"]. "</td>";
      echo "<td>" .$row["content"]. "</td>";
      echo "<td>" .$row["author_id"]. "</td>";
      echo "<td>";
      echo '<input type="checkbox" name="DeletePost[]" value="'.$row['post_id'].'"></td>';
      // $select ='<input type="checkbox" name="DeletePost[]" value="'.$row['post_id'].'"></td>';
      echo "</tr>";
    }
    echo "</table></center><br>";
  }
  else
  {
    echo '<center><h1>Sorry!</h1></center>';
    echo '<center><h2>There is no Post can be deteled.</h2></center>';
    echo '<center><p>You will be redirected in 5 seconds.</p></center>';
    header("refresh:5; url=AdminHome.html");
    exit();
  }
}
if(isset($_POST['submit']))
{
  if(!empty($_POST['DeletePost']))
  {
    echo '<center><h1>You just deleted those Posts:</h1></center>';
    foreach($_POST['DeletePost'] as $DeletePosts)
    {  
      $dsql = "DELETE FROM Posts WHERE post_id = '$DeletePosts'";
      if(!mysqli_query($mysqli, $dsql))
      {
        echo '<center><h1>Error!</h1></center>';
        echo '<center><p>Failed to delete Post. Please try again.</p></center>';
        echo '<center><p>You will be redirected in 2 seconds.</p></center>';
        header("refresh:2; url=DeletePost.html");
        exit();
      }
      else
      {
        echo '<center><p>'."The Post ID: ".$DeletePosts.'</p><center>';
      }
    }
    echo'<br><center><a href="DeletePost.html"><button id="button">Back</button></a></center>';
  }
  else
  {
    echo '<center><h1>Error!</h1></center>';
    echo '<center><p>Please Select at least one Post to delete.</p></center>';
    echo '<center><p>You will be redirected in 2 seconds.</p></center>';
    header("refresh:2; url=DeletePost.html");
  }
}



?>