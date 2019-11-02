show dbs

use firstDB

db.createUser({
  user: 'Guiselle',
  pwd: '123',
  roles: ['readWrite', 'dbAdmin']
})

db.customers.insert({
  firstName: 'Lady',
  lastName: 'Penagos'
})

db.customers.find()

db.customers.insert([
  {firstName: 'Isacc', lastName: 'Asimov'},
  {firstName: 'Elena', lastName: 'Pedraza'},
  {firstName: 'Felipe', lastName: 'McMillan'}
])
