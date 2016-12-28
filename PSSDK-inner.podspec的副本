Pod::Spec.new do |s|
  s.name         = "PSSDK-inner"
  s.homepage     = "https://github.com/yehongZhou/PSSDK-inner"
  s.summary      = "PSSDK on iOS."
  s.author       = { "zhouyehong" => "zhouyehongnewborn-town.com" }
  s.version      = "1.0.0"
  s.source       = { :git => "https://github.com/yehongZhou/PSSDK-inner.git", :tag => "1.0.0" }
  s.platform     = :ios, '6.0'
  s.requires_arc = true
  s.xcconfig     = { 'OTHER_LDFLAGS' => '-ObjC'}
  s.license      = 'MIT'
  s.source_files = 'PSSDK/*.{h,m}'
  s.vendored_libraries  = 'PSSDK/libPingStart-iOS.a'
  s.ios.frameworks = 'Foundation','UIKit'
  s.libraries = 'z'
end
