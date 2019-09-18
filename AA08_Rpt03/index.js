var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

router.get('/aa08', function(req, res, next) {
  res.render('aa08', { title: 'Express App',
  						id: 'AA08',
  						name: 'mina' });
});

module.exports = router;
