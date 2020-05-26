from math import sin, cos, pi, sqrt
a, b, h, m = (int(i) for i in input().split())
alpha, beta = 2*pi/12*h + 2*pi/12/60*m, 2*pi/60*m
ax, ay = a*sin(alpha), a*cos(alpha)
bx, by = b*sin(beta), b*cos(beta)
print(sqrt((ax - bx)**2 + (ay - by)**2))