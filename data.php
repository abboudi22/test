<?php
require_once('functions.inc');
$n = $_REQUEST['name'];//get the name from the url
$a = $_REQUEST['age'];
$op = $_REQUEST['op'];
switch ($op) {
  case 'add':
    add($n,$a);
    getdata();
    break;
  default :
    delete($op);
    getdata();
    break;
}
?>
