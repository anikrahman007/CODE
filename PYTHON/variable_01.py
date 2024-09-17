def main():
    a = name(input("Name?: ")).lower()
    b = number(int(input("b: ")))

    print(f"The name is: {a}")
    print(f"The number is: {b}")

def name(person):
    if person != "anik":
      return ("Hello,"+ " "+ person)
    else:
      return ("Hello, anik" + " " + "Where is the person? ")


def number(x):
    if x == 0:
       x += 2
       return x
    elif x == 100:
      x = x-1
      return x
    else:
      return x
    

main()
