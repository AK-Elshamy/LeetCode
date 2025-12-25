<?php
class Solution
{
    function maximumHappinessSum($happiness, $k)
    {
        rsort($happiness);

        $sum = 0;
        for ($i = 0; $i < $k; $i++) {
            if ($happiness[$i] - $i <= 0) {
                break;
            }
            $sum += ($happiness[$i] - $i);
        }

        return $sum;
    }
}

?>