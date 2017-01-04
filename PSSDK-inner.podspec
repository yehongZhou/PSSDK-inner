Pod::Spec.new do |s|
  s.name             = "PSSDK-inner"
  s.version          = "1.0.5"
  s.summary          = "PSSDK dev version"
  s.homepage         = "https://github.com/yehongZhou/PSSDK-inner"
  s.license          = 'MIT'
  s.author           = { "zhouyehong" => "zhouyehong@newborn-town.com" }
  s.source           = { :git => "https://github.com/yehongZhou/PSSDK-inner.git", :tag => s.version }
  s.social_media_url = 'http://www.pingstart.com'

  s.platform     = :ios, '8.0'
  s.requires_arc = true

#s.frameworks   =  'CoreGraphics', 'UIKit', 'Foundation', 'QuartzCore', 'StoreKit', 'SystemConfiguration', 'CoreTelephony', 'Security', 'AdSupport'
#s.source_files = 'PingStart/*.{h,m}'
#s.ios.vendored_library = 'PingStart/libPingStart.a'
#s.xcconfig     = { 'OTHER_LDFLAGS' => '-ObjC'}
#s.libraries = 'z'

    s.default_subspecs = 'Default'

    s.subspec 'Default' do |ss|
    ss.preserve_paths  = 'PingStart/NbtPingStart.framework'
    ss.public_header_files  = 'PingStart/NbtPingStart.framework/Headers/*.h'
    ss.ios.vendored_frameworks  = 'PingStart/NbtPingStart.framework'
    end

end
