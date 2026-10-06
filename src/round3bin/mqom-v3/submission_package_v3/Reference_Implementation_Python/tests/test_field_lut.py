from sage.all import FiniteField, PolynomialRing
F2 = FiniteField(2)
R_F2 = PolynomialRing(F2, 'X')
X_F2 = R_F2.gen()
F2to8 = R_F2.quotient_ring(R_F2.ideal(
    X_F2**8 + X_F2**4 + X_F2**3 + X_F2 + 1
))

#print_output = lambda *args, **kwargs: None
print_output = print

print_output('[', end='')
for i in range(256):
    print_output('[', end='')
    for j in range(256):
        a = F2to8([int(x) for x in bin(i)[2:].rjust(8, '0')[::-1]])
        b = F2to8([int(x) for x in bin(j)[2:].rjust(8, '0')[::-1]])
        r = a*b
        k = int(''.join([str(x) for x in list(r)][::-1]), base=2)
        print_output(k, end='')
        if j < 255:
            print_output(', ', end='')
    print_output(']', end='')
    if i < 255:
        print_output(', ', end='')
print_output(']')

