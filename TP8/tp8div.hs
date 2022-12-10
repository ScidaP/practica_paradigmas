divisionentera :: Integer -> Integer -> Integer
divisionentera x y
 | y == 0 = -999
 | y == 1 = x
 | x == 0 = 0
 | x < y = 0
 | otherwise = (if x-y >= 0 then divisionentera (x - y) y + 1 else 1)