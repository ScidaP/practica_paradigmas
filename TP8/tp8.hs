misterio x
 | x <= 0 = 0
 | x == 1 = 1
 | otherwise = 2*x + misterio(x-1) - 1
 
divisionentera x y
 | y == 0 = -999
 | y == 1 = x
 | x == 0 = 0
 | x < y = 0
 | otherwise = (if x-y >= 0 then divisionentera (x - y) y + 1 else 1)
 
 -- tratamiento listas: head, tail, last, init (quita el ultimo elemento)
 -- take, drop (parecido a take solo que quita en lugar de agarrar), ++ (concatenar dos listas)
 -- !! obtiene el elemento de la lista en la pos indicada --> [1,2,3,4] !! 2 = 3
 -- length, null, maximum, minimum, sum, product, elem (determina si un elemento pertenece a la lista)
 -- [1..8] --> [1,2,3,4,5,6,7,8]
 -- [1,3..12] --> [1,3,6,9,12]
 
 -- Contar mayores con guards

contarmayores xs y 
 | null xs = 0
 | (head xs) > y = 1 + contarmayores (tail xs) y
 | otherwise= contarmayores (tail xs) y
 
-- Contar mayores con pattern matching
 
contarmayores1 [] y = 0
contarmayores1 (x:xs) y = if x>y then 1 + contarmayores xs y else contarmayores xs y
 
 -- Contar mayores con list comprehension

contarmayores2 xs y = sum [1 | x <- xs, x>y]

 -- ejercicio c 

-- primeroselementos1 xs y = [x | x <- xs, ]

-- ejercicio d

interseccion [] [] = []
interseccion xs [] = xs
interseccion [] xy = xy
interseccion (x:xs) (y:xy) = if x==y then x : interseccion xs xy else interseccion xs xy

-- ejercicio e

transformar f xs
 | null xs = xs
 | otherwise = f (head xs) : transformar f (tail xs)
 
-- con pattern matching 
transformar1 f [] = []
transformar1 f (x:xs) = f x : transformar1 f xs

-- ejercicio f

tablade5 = [5*x | x <- [1..10]]

-- ejercicio g

-- ------------------- EJEMPLOS PLATAFORMA --------------------------------------

-- comentarios
{-
	comentarios de más de una línea
-}
-- COMANDOS HASKELL
-- :t nombreFuncion retorna el tipo de la funcion


--              EJEMPLOS HASKELL
{-
    Función potencia a^b, b>=0. Si b < 0 devuelve 0
-}

-- GUARDS
potencia1 a b
   |b < 0  = 0
   |b==0   = 1
   |otherwise= a* potencia1 a (b-1)
   
-- PATTERN MATCHING
potencia2 a 0 = 1
potencia2 a b = if b < 0 then 0 else a* potencia2 a (b-1)

-- LIST COMPREHENSION
-- potencia3 a b = product [a | x<-[1..b], b>0]
potencia3 a b = if b<0 then 0 else product [a | z<-[1..b], b>0]



{-
    Función pertenece
-}

-- PATTERN MATCHING 
pertenece1 [] y = False
pertenece1 (x:xs) y = if y==x then True else pertenece1 xs y

-- GUARDS
pertenece2 xs y
   | null xs   = False
   | head xs ==y = True
   | otherwise = pertenece2 (tail xs) y
   
-- LIST COMPREHENSION
pertenece3 xs y = or [z==y| z<-xs]