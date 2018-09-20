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
if($result->num_rows>0)
{
  echo "<center><h1>Here is the users list</h1></center>";
  echo "<center><table border=\"1\">";
  while($row = $result->fetch_assoc())
  {
    echo "<tr>";
    echo "<th>User id: </th>";
    echo "<td>" .$row["user_id"]. "</td>";
    echo "</tr>";
  }
  echo "</table></center><br>";
}
else
{
  echo "<center><h1>The user list is empty.</h1></center><br>";
}
echo'<center><a href="AdminHome.html"><button id="button">Back</button></a></center>';


?>
