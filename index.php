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
            $('#commands').load('update.php').fadeIn("slow");
        },  2500); // refresh every 2500 milliseconds
    </script>
<body>

<div class="grid">
    <div class="header">
        <h1 class="papi">Papi</h1>
    </div>
    <div class="content" id="commands"></div>
    <div class="footer">Created by: Nick, Dago, Kyle Harrison</div>
</div>



</body>
</html>
