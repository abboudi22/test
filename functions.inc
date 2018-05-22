<?php
require_once('database.php');

//link the css files and the javascript
function linking ($DIR){
    $myArray = array('css','js');
    foreach ($DIR as $file) {
      if(in_array(pathinfo($file,PATHINFO_EXTENSION),$myArray) && pathinfo($file,PATHINFO_EXTENSION) == 'css' && file_exists($file)){
        echo "<link rel='stylesheet' href='$file'/>";
      }
      else {
        echo "<script src='$file'></script>";
      }
    }
  }
//to insert into the data base
function add($name, $age ){
  $sql = "INSERT INTO test (name,age) VALUES ('$name','$age')";
  $res = mysqli_query($GLOBALS['conn'] , $sql);
}
//get the data from the database
function getdata(){
  $sql = "select * from test";
  $res = mysqli_query($GLOBALS['conn'],$sql);
  if(mysqli_num_rows($res) > 0 ){
    while($row = mysqli_fetch_assoc($res)){
      echo "<div id='box-2'>" . $row['name'] . "   " . $row['age'] .
      "<button onclick='enableAjax(this.value,this.name)' name='box' value='".$row['id']."'>DELETE</button></div><br><br>";
    }
  }
  else {
    echo "<div id='box-2'>no thing to show</div>";
  }
}
//delet the data from the database depending on the id of the register
function delete($i){
  $sql = "DELETE FROM test WHERE id = '$i'";
  $res = mysqli_query($GLOBALS['conn'] , $sql);
}
?>
