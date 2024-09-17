ban_name = input("Banned Name: ").lower()
def main():
    global ban_name
    a = name(input("Name?: ")).lower()
    b = age(int(input("b: ")))

    print(f"The name is: {a}")
    print(f"The age is: {b}")

def name(person):
    if person != ban_name:
      return ("Hello,"+ " "+ person)
    else:
      return ("Hello, anik" + " " + "Where is the person? ")


def age(x):
    if x == 0:
       x += 18
       return x
    elif x == 100:
      x = x-20
      return x
    else:
      return x


main()
