
with open('code.txt', 'w') as f:
    for i in range(10):
        for j in range(2**i):
            f.write(f"case {2**i - 1 + j}:\n")
            f.write("switch(s[i]) {\n")
            f.write("case '0':\n")
            f.write(f"\tstate = {2**(i+1) - 1 +  j*2};\n")
            f.write("\tbreak;\n")
            f.write("case '1':\n")
            f.write(f"\tstate = {2**(i+1) - 1 + j*2 + 1};\n")
            f.write("\tbreak;\n")
            f.write("}\n")
            f.write("break;\n")

    for j in range(2 ** 10):
        f.write(f"case {2**10 - 1 + j}:\n")
        f.write("switch(s[i]) {\n")
        f.write("case '0':\n")
        f.write(f"\tstate = {2**10-1 + (j - 2**9 * (j // 2**9))*2};\n")
        f.write("\tbreak;\n")
        f.write("case '1':\n")
        f.write(f"\tstate = {2**10-1 + (j - 2**9 * (j // 2**9))*2 + 1};\n")
        f.write("\tbreak;\n")
        f.write("}\n")
        f.write("break;\n")


