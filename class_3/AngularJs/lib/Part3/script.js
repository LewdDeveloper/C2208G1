angular.module('myApp', [])
.controller('myController', function($scope){
  $scope.Qty = 1;
  $scope.products = [
   {
    id: 1,
    Category: 'flashlight',
    Description: 'small flashlight',
    Price: 6.99,
    Qty: 1
   },
   {
    id: 2,
    Category: 'flashlight',
    Description: 'big flashlight',
    Price: 12.99,
    Qty: 1
   },{
    id: 3,
    Category: 'sleeping bag',
    Description: 'simple sleeping bag',
    Price: 49.99,
    Qty: 1
   },{
    id: 4,
    Category: 'sleeping bag',
    Description: 'deluxe sleeping bag',
    Price: 79.99,
    Qty: 1
   },{
    id: 5,
    Category: 'stove',
    Description: 'small stove',
    Price: 29.99,
    Qty: 1
   },{
    id: 6,
    Category: 'stove',
    Description: 'big stove',
    Price: 39.99,
    Qty: 1
   },
  ];
  $scope.cart = [];

  $scope.findInCart = function(id) {
    for(var i = 0; i < $scope.cart.length; i++) {
      if ($scope.cart[i].id == id) {
          return true;
      }
    }
    return false;
  };

  $scope.getPrice = function(item) {
    return (item.Qty * item.Price).toFixed(2);
  };

  $scope.sum = function() {
    $scope.total = null;
    $scope.cart.forEach(x => {
      $scope.total += parseFloat($scope.getPrice(x));
    });
  };

  $scope.addToCart = function(item) {
    if ($scope.findInCart(item.id)) {
      $scope.cart.map(x => x.id == item.id ? x.Qty += item.Qty : x);
    }
    else {
      $scope.cart.push(angular.copy(item));
    }
    $scope.sum();
  };

  $scope.removeItem = function (item) {
    var index = $scope.cart.indexOf(item);
    $scope.cart.splice(index, 1);
    $scope.sum();
  };

  
  $scope.clearCart = function () {
    $scope.cart.length = 0;
    $scope.sum();
  };
})