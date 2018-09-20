<?php 

$username = $_POST['UserName'];
$posttext = $_POST['PostText'];

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

if($posttext=='')
{
  echo '<center><h1>Error!</h1></center>';
  echo '<center><p>The Post Text cannot be empty!</p></center>';
  header("refresh:2; url=CreatePosts.html");
  exit();
}
// else
// {
//   echo '<center><h1></h1></center>';
// }
$query = "SELECT user_id FROM Users WHERE user_id = '$username'";
$result = $mysqli->query($query);
if ($result->num_rows > 0)
{
  $sql = "INSERT INTO Posts (content, author_id)
  VALUES ('$posttext','$username')";
  if(!mysqli_query($mysqli, $sql))
  {
    echo '<center><h1>Error!</h1></center>';
    echo '<center><p>Post failed. Please try again.</p></center>';
    echo '<center><p>You will be redirected in 2 seconds.</p></center>';
    header("refresh:2; url=CreatePosts.html");
  }
  else
  {
    echo '<center><h1>Successful!</h1></center>';
    echo '<center><p>A New post created successfully.</p></center>';
    echo '<center><p>You will be redirected in 2 seconds.</p></center>';
    header("refresh:2; url=UserInterface.html");
  }
}
else
{
  echo '<center><h1>Error!</h1></center>';
  echo '<center><p>The User name does not exist!</p></center>';
  echo '<center><p>You will be redirected in 2 seconds.</p></center>';
  header("refresh:2; url=CreatePosts.html");
  exit();
}
// header("refresh:2; url=CreatePosts.html");


?>