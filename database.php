<?php

  define('HOST','localhost');
  define('USER','root');
  define('PASSWORD','');
  define('DBNAME','ajax');
  $GLOBALS['conn'] = mysqli_connect(HOST,USER,PASSWORD);
    if(!$conn){
      die();
    }
    else {
    }
    $selection = mysqli_select_db($conn,'ajax');
    if(!$selection){
      die();
    }
    else {
    }
?>
