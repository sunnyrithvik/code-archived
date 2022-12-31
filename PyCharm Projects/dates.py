import datetime as dt

d = dt.date.today()

td = dt.timedelta(days=10)
print(d)

bday = dt.date(2020, 9, 6)

t_bd = bday - td
print(type(t_bd))
print(t_bd.__dir__())
