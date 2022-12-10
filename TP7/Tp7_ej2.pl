edad(luis, 20).
edad(juan, 72).
edad(pedro, 40).
edad(julia, 17).
edad(maria, 46).
edad(andres, 50).
edad(rocio, 67).
edad(joaquin, 15).
edad(cecilia, 35).
edad(felicia, 60).
edad(santiago, 45).
edad(veronica, 34).
edad(eugenia, 70).
edad(carlos, 73).
estadocivil(luis, soltero).
estadocivil(juan, viudo).
estadocivil(pedro, casado).
estadocivil(julia, casada).
estadocivil(maria, soltera).
estadocivil(andres, casado).
estadocivil(rocio, soltera).
estadocivil(joaquin, soltero).
estadocivil(cecilia, soltera).
estadocivil(felicia, soltera).
estadocivil(santiago, casado).
estadocivil(veronica, casada).
estadocivil(eugenia, viuda).
estadocivil(carlos, casado).
menorDeEdad(X) :- edad(X, Y), Y<18.
jubilacion(X) :- edad(X, Y), Y>=65.
mayor(X, Y) :- edad(X, Z), edad(Y, K), Z > K.
dif10(X, Y) :- abs(X-Y) >= 10.
coetaneo(X, Y) :- edad(X, Z), edad(Y, K), dif10(Z, K).