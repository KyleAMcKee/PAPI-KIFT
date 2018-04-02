<?php
	$speech = file_get_contents("speech.txt");
    $speech = explode("\n", $speech);
    foreach ($speech as $item)
    {
        echo '<span>' . '<br>' . $item . "\n" . '</span>';
    }
?>