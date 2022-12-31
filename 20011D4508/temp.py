inn = input("enter input format c or f or k ")
temp = int(input("enter the temp "))
out = input("enter output format c or f or k ")

if inn == "c":
    if out == "f":
        fah = (9 / 5) * temp + 32
        print("fah temp", fah)
    elif out == "k":
        kel = temp + 273.15
        print("kel temp", kel)

if inn == "f":
    if out == "c":
        cel = (temp - 32) * 5 / 9
        print("cel temp", cel)
    elif out == "k":
        kel = (temp + 459.67) * 5 / 9
        print("kel temp", kel)

if inn == "k":
    if out == "c":
        cel = temp - 273.15
        print("cel temp", cel)
    elif out == "f":
        fah = temp * 9/5 - 459.67
        print("fah temp", fah)