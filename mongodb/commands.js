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

db.customers.find({firstName: 'Lady'})

db.customers.update(
  {lastName: 'McMillan'},
  {
    firstName: 'Felipe',
    lastName: 'Contreras',
    gender: 'male'
  }
)

db.customers.find().pretty()

db.customers.find({"_id" : ObjectId("5dbd0a610ded94e4ed7e456d")})

db.customers.update(
  {_id: ObjectId("5dbd0a610ded94e4ed7e456b")},
  {$set: {age: 34}}
)
