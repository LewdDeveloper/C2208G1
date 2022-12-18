angular.module('myApp', [])
.controller('myController', function($scope){
  $scope.templist = [];
  $scope.avg = null;

  $scope.add = function() {
    if($scope.temp != null)
    this.templist.push($scope.temp);
    $scope.temp = null;
  };

  $scope.keyPressed = function($event) {
    if ($event.keyCode == 13) {
      $scope.add();
    }
  };

  $scope.getAverage = function() {
    if ($scope.templist.length != 0 ) {
      $scope.templist.forEach(x => {
        $scope.avg += x;
      });
      $scope.avg = $scope.avg/($scope.templist.length);
    }
   
  }
})