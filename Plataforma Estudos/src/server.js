require('express')()
.get("/", (req, res) => {
    return res.send("Hi From NLW")
})

.listen(5500)

