import datetime

web_orders = ['11:00', '11:20', '11:40']
app_orders = ['11:10', '11:30', '11:50']

def merge_orders(web_orders: list, app_orders: list) -> list:
    result = []

    i = 0
    j = 0

    while i < len(web_orders) and j < len(app_orders):
        if web_orders[i] <= app_orders[j]:
            result.append(web_orders[i])
            i = i + 1

        else:
            result.append(app_orders[j])
            j = j + 1

    while i < len(web_orders):
        result.append(web_orders[i])
        i = i + 1

    while j < len(app_orders):
        result.append(app_orders[j])
        j = j + 1

    return result

orders = merge_orders(web_orders, app_orders)
print (orders)
