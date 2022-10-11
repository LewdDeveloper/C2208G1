param(
    [Parameter()]
    [bool]$bypass = 1
)
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
Get-ChildItem *.exe -Recurse | ForEach-Object { Remove-Item -Path $_.FullName -Confirm:$bypass }
Get-ChildItem *.obj -Recurse | ForEach-Object { Remove-Item -Path $_.FullName -Confirm:$bypass }
Get-ChildItem *.ilk -Recurse | ForEach-Object { Remove-Item -Path $_.FullName -Confirm:$bypass }
Get-ChildItem *.pdb -Recurse | ForEach-Object { Remove-Item -Path $_.FullName -Confirm:$bypass }