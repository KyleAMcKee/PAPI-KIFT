<!DOCTYPE html>
<html>
<head>
  <link rel="stylesheet" type="text/css" href="style.css">
</head>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.3.0/jquery.min.js"></script>
    <script type="text/javascript">
        var auto_refresh = setInterval(
        function ()
        {
            $('#response').load('update.php').fadeIn("slow");
        },  2500); // refresh every 2500 milliseconds
    </script>
    <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.3.0/jquery.min.js"></script>
    <script type="text/javascript">
        var auto_refresh = setInterval(
        function ()
        {
            $('#server').load('server.php').fadeIn("slow");
        },  2500); // refresh every 2500 milliseconds
    </script>
<body>
<div class="wrapper">
  <div class="box header"><h1>P.A.P.I.<br><br>Personalized Assistant for <br>Processing Information </h1></div>
  <div class="box server-title">Input received from mic: </div>
  <div class="box response-title">Response from server: </div>
  <div class="box server" id="server"></div>
  <div class="box response" id="response"></div>
  <div class="box footer">Created by: Dago, Nick, Kyle, and Harrison <span>&#169; 2018 Butterhorn Technologies</span></div>
</div>
</body>
</html>