Pod::Spec.new do |s|
  s.name             = "PSSDK-inner"
  s.version          = "1.0.0"
  s.summary          = "PSSDK dev version"
  s.homepage         = "https://github.com/yehongZhou/PSSDK-inner"
  s.license          = 'Code is MIT, then custom font licenses.'
  s.author           = { "zhouyehong" => "zhouyehong@newborn-town.com" }
  s.source           = { :git => "https://github.com/yehongZhou/PSSDK-inner.git", :tag => s.version }
  s.social_media_url = 'http://www.pingstart.com'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'PSSDK/*.{h,m}'
  #s.vendored_libraries  = 'PSSDK/libPingStart-iOS.a'
  s.ios.vendored_library = 'PSSDK/libPingStart-iOS.a'
  s.xcconfig     = { 'OTHER_LDFLAGS' => '-ObjC'}
  #s.ios.frameworks = 'Foundation','UIKit'
  
end
