/// <reference path="..\\node_modules\@types\angularjs\index.d.ts" />
let app = angular.module('myApp', []);
app.controller('myCtrl', function ($scope) {
  $scope.store = [
    {
      id: 1,
      Category: 'flashlight',
      Description: 'small flashlight',
      Price: 6.99,
      Qty: 1,
    },
    {
      id: 2,
      Category: 'flashlight',
      Description: 'big flashlight',
      Price: 12.99,
      Qty: 1,
    },
    {
      id: 3,
      Category: 'sleeping bag',
      Description: 'simple sleeping bag',
      Price: 49.99,
      Qty: 1,
    },
    {
      id: 4,
      Category: 'sleeping bag',
      Description: 'deluxe sleeping bag',
      Price: 79.99,
      Qty: 1,
    },
    {
      id: 5,
      Category: 'stove',
      Description: 'small stove',
      Price: 29.99,
      Qty: 1,
    },
    {
      id: 6,
      Category: 'stove',
      Description: 'big stove',
      Price: 39.99,
      Qty: 1,
    },
  ];
  $scope.cart = [];
  $scope.itemExist = function (item) {
    let array = $scope.store;
    for (let index = 0; index < array.length; index++) {
      if (array[index].id == item.id) {
        return true;
      }
    }
  };
  $scope.getPrice = function (item) {
    return item.Price * item.Qty;
  };
  $scope.sum = function () {
    $scope.total = null;
    $scope.cart.forEach((x) => {
      $scope.total += parseFloat($scope.getPrice(x));
    });
  };
  $scope.addToCart = function (item) {
    if ($scope.itemExist(item)) {
      let array = $scope.cart;
      for (let index = 0; index < array.length; index++) {
        if (array[index].id == item.id) {
          array[index].Qty += item.Qty;
          $scope.sum();
          return;
        }
      }
      $scope.cart.push(angular.copy(item));
      $scope.sum();
    }
  };
  $scope.removeItem = function (selectedItem) {
    $scope.cart.filter(
      (item, index) =>
        item.id === selectedItem.id && $scope.cart.splice(index, 1),
    );
    $scope.sum();
  };
  $scope.clearCart = function () {
    $scope.cart = [];
    $scope.sum();
  };
});
