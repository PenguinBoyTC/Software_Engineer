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

$query = "SELECT user_id FROM Users";
$result = $mysqli->query($query);

$select = '<select name = "select">';
if(!isset($_POST['select']))
{
  if($result->num_rows>0)
  {
    echo '<center><h2>Here is the users list</h2></center>';
    while($row = $result->fetch_assoc())
    {
      $select.= '<option value="'.$row['user_id'].'">' .$row['user_id']. '</option>';
    }
    $select.= '</select><br>';
    echo $select;
  } 
  else
  {
    echo '<center><h1>The list is empty</h1></center>';
    echo '<select>';
    echo '<option>--</option>';
    echo '</select>';
  }
}


if(isset($_POST['select']))
{
  $selected = $_POST['select'];
  $query = "SELECT * FROM Posts WHERE author_id = '$selected'";
  $result = $mysqli->query($query);
  echo '<center><h1>' ."Author Name: ".$selected. '</h1></center>';
  if($result->num_rows>0)
  {
    echo "<center><table border=\"1\">";
    echo "<tr>";
    echo "<th>Post id </th>";
    echo "<th>Content </th>";
    echo "<th>Author ID </th>";
    echo "</tr>";
    while($row = $result->fetch_assoc())
    {
      echo "<tr>";
      echo "<td>" .$row["post_id"]. "</td>";
      echo "<td>" .$row["content"]. "</td>";
      echo "<td>" .$row["author_id"]. "</td>";
      echo "</tr>";
      // echo '<center><p>' ."Post ID: ".$row["post_id"].".  Content: ".$row["content"]. '</p></center>';
    }
    echo "</table></center><br>";
  }
  else
  {
    echo '<center><h2>He/She does not have any post</h2></center>';
  }
  echo'<center><a href="ViewUserPosts.html"><button id="button">Back</button></a></center>';
}


?>
