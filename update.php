<?php
	$speech = file_get_contents("response.txt");
    $speech = explode("\n", $speech);
    foreach ($speech as $item)
    {
        echo '<span>' . '<br>' . $item . "\n" . '</span>';
    }
?>