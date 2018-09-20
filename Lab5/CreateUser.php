<?php 

$username = $_POST['UserName'];

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
$sql = "INSERT INTO Users (user_id)
               VALUES ('$username')";
if(!mysqli_query($mysqli, $sql))
{
  echo '<center><h1>Error!</h1></center>';
  echo '<center><p>The user name already exists!</p></center>';
  echo '<center><p>You will be redirected in 2 seconds.</p></center>';
  header("refresh:2; url=CreateUser.html");
}
else
{
  echo '<center><h1>Successful!</h1></center>';
  echo '<center><p>Create a new user successfully.</p></center>';
  echo '<center><p>You will be redirected in 2 seconds.</p></center>';
  header("refresh:2; url=UserInterface.html");
}
/* close connection */
// $mysqli->close();
// header("refresh:2; url=CreateUser.html");


?>