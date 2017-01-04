1、开源库发布之后，需要打上tag
2、进入到项目根目录下，创建podspec文件
pod spec create PodName
3、编辑podspec文件中的相关信息，有两个比较重要的地方s.source和s.source_files,可以验证是否有误：
pod spec lint PodName.podspec --verbose
4、注册pod trunk
$ pod trunk register orta@cocoapods.org 'Orta Therox' --description='macbook air'
5、发布到pod trunk
pod trunk push [NAME.podspec]
该命令在包含有.podspec文件的目录下执行
6、更新pod库
pod setup
如果pod trunk push成功后无法pod search到自己的库，可执行该命令。

检测idfa： grep -r advertisingIdentifier .
检查bitcode：otool -l yourlib.a | grep bitcode
lipo -info youlib.a
appledoc -o ./doc --project-name “你的工程名字” --project-company “你的公司名字” .
