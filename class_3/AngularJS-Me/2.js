/// <reference path="..\\node_modules\@types\angularjs\index.d.ts" />
let app = angular.module('myApp', []);
app.controller('myCtrl', function ($scope) {
  $scope.tempuratureList = [];
  $scope.tempuratureMedian = null;
  $scope.addTempurature = function () {
    if ($scope.myForm.input.$valid) {
      $scope.tempuratureList.push($scope.Tempurature);
    }
  };
  $scope.getMedian = function () {
    let len = $scope.tempuratureList.length;
    if (len > 0) {
      $scope.tempuratureMedian = $scope.tempuratureList.reduce(
        (accumulator, current) => accumulator + current,
        0,
      );
      $scope.tempuratureMedian /= len;
    }
  };
});
