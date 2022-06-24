import sqlite3

con = sqlite3.connect('emaildb_assignment.sqlite')
cur = con.cursor()

cur.execute('DROP TABLE IF EXISTS Counts')

cur.execute('''CREATE TABLE Counts (org TEXT, count INTEGER)''')

fname = input('Enter File Name: ')
if len(fname) < 1 : fname = 'mbox.txt'
fh = open(fname)

for line in fh:
    if not line.startswith('From '): continue
    pieces = line.split()
    whole_email = pieces[1]
    words = pieces[1].split('@')
    email = words[1]
    cur.execute('SELECT count FROM Counts WHERE org = ? ', (email, ))
    row = cur.fetchone()
    if row is None:
        cur.execute('''INSERT INTO Counts (org, count) VALUES (?, 1)''', (email, ))
    else:
        cur.execute('UPDATE Counts SET count = count + 1 WHERE org = ? ', (email, ))

    con.commit()

sqlstr = 'SELECT org, count FROM Counts ORDER BY count DESC LIMIT 10'
for row in cur.execute(sqlstr):
    print(str(row[0]), row[1])
