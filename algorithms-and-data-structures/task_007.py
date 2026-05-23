class PhoneBook:

    def __init__(self):
        self.capacity = 8
        self.count = 0
        self.table = [[] for i in range(self.capacity)]

    def hash_function(self, name):

        total = 0

        for char in name:
            total += ord(char)

        return total % self.capacity

    def resize(self):

        old = self.table

        self.capacity *= 2
        self.table = [[] for i in range(self.capacity)]

        for bucket in old:
            for name, phone in bucket:
                self.add_contact(name, phone)

    def add_contact(self, name, phone):

        if self.count / self.capacity > 0.75:
            self.resize()

        index = self.hash_function(name)

        for contact in self.table[index]:

            if contact[0] == name:
                contact[1] = phone
                return

        self.table[index].append([name, phone])

        self.count += 1

    def get_contact(self, name):

        index = self.hash_function(name)

        for contact in self.table[index]:

            if contact[0] == name:
                return contact[1]

        return "Контакт не знайдено"

    def remove_contact(self, name):

        index = self.hash_function(name)

        for contact in self.table[index]:

            if contact[0] == name:
                self.table[index].remove(contact)
                self.count -= 1

    def contains(self, name):

        index = self.hash_function(name)

        for contact in self.table[index]:

            if contact[0] == name:
                return True

        return False

    def count_contacts(self):
        return self.count


book = PhoneBook()

book.add_contact("Ольга", "0979087654")
book.add_contact("Марія", "0951234567")

print(book.get_contact("Ольга"))
print(book.contains("Марія"))
print(book.count_contacts())
