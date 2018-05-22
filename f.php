<?php
    require_once('functions.inc');
    require_once('database.php');
    $f = scandir(__DIR__);
    linking($f);
?>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>AJAx</title>
    </head>
    <body>
    <div class="main">
    <h1>todo app</h1>
    <form name='forme'>
      name:<input type='text' name='name' />
      age:<input type='text' name='age'/>
    </form>
    <button onclick='enableAjax(this.value,"box",)' value='add'>ADD</button>
    <div class="container" >

    <div id="box"><?php getdata();?></div>
    </div>
</div>
  </body>
</html>
