<?php
echo rand()."\n";
$name = "grèg";
$name=urlencode($name);
echo $name."\n";
echo "<br>";
$data = fopen("newTest.txt", "r");
echo mt_rand();
$d = date("%D");
echo $d;
$file = fopen(__DIR__."\\newTest.txt","r");
echo $file;
$info = stat("newTest.txt");
echo __FILE__;
echo __DIR__;
?>