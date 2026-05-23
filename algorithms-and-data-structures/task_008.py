class Deque:

    def __init__(self):
        self.items = []

    def add_front(self, item):
        self.items.insert(0, item)

    def add_rear(self, item):
        self.items.append(item)

    def remove_front(self):
        return self.items.pop(0)

    def remove_rear(self):
        return self.items.pop()

    def is_empty(self):
        return len(self.items) == 0


def is_palindrome(phrase: str) -> bool:

    dq = Deque()

    for char in phrase:

        if char.isalnum():
            dq.add_rear(char.lower())

    while len(dq.items) > 1:

        first = dq.remove_front()

        last = dq.remove_rear()

        if first != last:
            return False

    return True


phrase = input("Введіть фразу: ")

if is_palindrome(phrase):
    print("Паліндром")
else:
    print("Не паліндром")
