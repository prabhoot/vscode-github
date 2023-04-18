db.content.insert({
    'name': 'prabhoot',
    'age': '19',
    'member_since': '10'
})
db.content.insertMany([
    {
        'name': 'kanchan',
        'age': '20',
        'member_since': '11',
        'friend': 'prabhoot'
    },
    {
        'name': 'lalu',
        'age': '40',
        'member_since': '24'

    }
])


db.content.insert(
    {
        'name': 'prabhoot',
        'age': '19',
        'member_since': '10',
        'date': new Date()
    }
)

db.content.find({ name: 'lalu' })

// show first 3 only
db.content.find().pretty().limit(3)

db.content.find().pretty().limit().count()

db.content.update({ name: 'lalu' },
    {
        'name': 'lalu',
        'age': '40',
        'member_since': '12'
    }
)

// uspert

db.content.update({ name: 'shubham' },
    {
        'name': 'shubham',
        'age': '22',
        'member_since': '44'
    },
    {
        upsert: true
    }
)


// not working as a inc can only work on interger data type and we inseted all the strings.

// db.content.update({ name: 'lalu' },
//     {
//         $inc: {
//                 member_since:10
//         }
//     }
// )
// 

db.content.insert(
    {
        'name':'test',
        'age':2,
        'hometown':'test hometown'
    }
)
db.content.update({name:'test'},{$inc:{age:3}})