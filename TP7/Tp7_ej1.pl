progenitor(carlos, isabelii).
progenitor(carlos, felipe).
progenitor(william, carlos).
progenitor(william, diana).
progenitor(harry, diana).
progenitor(harry, carlos).
progenitor(george, william).
progenitor(george, catherine).
progenitor(charlotte, william).
progenitor(charlotte, catherine).
progenitor(louis, william).
progenitor(louis, catherine).
progenitor(archie, meghan).
progenitor(archie, harry).
progenitor(lilibet, meghan).
progenitor(lilibet, harry).
femenino(isabelii).
femenino(meghan).
femenino(charlotte).
femenino(lilibet).
femenino(catherine).
femenino(diana).
masculino(carlos).
masculino(william).
masculino(harry).
masculino(george).
masculino(louis).
masculino(archie).
masculino(felipe).
padreDe(Y, X) :- progenitor(Y, X), masculino(X).
madreDe(Y, X) :- progenitor(Y, X), femenino(X).
hijoDe(Y, X) :- progenitor(X, Y), masculino(X).
hijaDe(Y, X) :- progenitor(X, Y), femenino(X).
abueloDe(X, Y) :- progenitor(X, Z), progenitor(Z, Y), masculino(Y).
abuelaDe(X, Y) :- progenitor(X, Z), progenitor(Z, Y), femenino(Y).
hermanos(X, Y) :- padreDe(X, Z), padreDe(Y, Z), X\==Y.
primoDe(X, Y) :- padreDe(X, Z), padreDe(Y, K), hermanos(K,Z), masculino(Y).
primaDe(X, Y) :- padreDe(X, Z), padreDe(Y, K), hermanos(K,Z), femenino(Y).
tioDe(X, Y) :- padreDe(X, Z), hermanos(Z, Y), masculino(Y).
tiaDe(X, Y) :- padreDe(X, Z), hermanos(Z, Y), femenino(Y).
bisabueloDe(X, Y) :- progenitor(X, Z), progenitor(Z, K), progenitor(K, Y), masculino(Y).