def main():
    str = input()
    print(convert(str))

def convert(sentence):
    sentence = sentence.replace(":)", "🙂")
    sentence = sentence.replace(":(", "🙁")
    return sentence


main()
