ans = 0
a = dict()
a['Tetrahedron'] = 4
a['Cube'] = 6
a['Octahedron'] = 8
a['Dodecahedron'] = 12
a['Icosahedron'] = 20
b = int(input())
for i in range(b):
    ans += a[input()]
print(ans)