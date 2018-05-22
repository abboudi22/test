//to create the xmlhttprequest object
function creatXHT(){
  var XTR ;
  try
  {
    if(window.XMLHttpRequest){XTR = new XMLHttpRequest();console.log("OK");}
    else {
      XTR = new ActiveXObject('Microsoft.XMLHTTP');
      if(!XTR){
        XTR = new ActiveXObject('Msxml2.xmlhttp.3.0');
      }
      if(!XTR){
        XTR = new ActiveXObject('Msxml2.xmlhttp.6.0');
      }
    }
  }
  catch (e)
  {
    console.log('NO');
  }
  return XTR;
}
//to enable the ajax
function enableAjax(op,id,url) {

  var XRT = creatXHT(),
    name = forme.name.value,
    age = forme.age.value;
  XRT.onreadystatechange = function(){
    if(this.readyState == 4 && this.status == 200){
      document.getElementById(id).innerHTML = this.responseText;
    }
  }
  XRT.open("GET",'data.php?name='+name+'&age='+age+"&op="+op,true);//op for the operation
  XRT.send();
}
