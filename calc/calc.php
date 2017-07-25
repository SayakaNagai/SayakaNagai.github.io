<?php
$param = strstr($_SERVER["REQUEST_URI"], '?'); 
$param = substr($param, 1);
$ans = eval("return ${param};");
if( is_numeric($ans) == TRUE ){
echo $ans;
}else{
echo "ERROR";
}
?>
