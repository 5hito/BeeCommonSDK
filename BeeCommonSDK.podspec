
Pod::Spec.new do |s|

  s.name         = "BeeCommonSDK"
  s.version      = "1.0.7"
  s.summary      = "集合基本使用功能"
  s.description  = <<-DESC
    0.1.x:基础功能合集使用
    1.0.x:基础功能修改
                   DESC

  s.homepage     = "https://github.com/5hito/BeeCommonSDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.author             = { "5hito" => "beemans@foxmail.com" }

  s.ios.deployment_target    = '8.0'
  s.source       = { :git => "https://github.com/5hito/BeeCommonSDK.git", :tag => s.version.to_s }

  s.frameworks = "AdSupport", "WebKit"
  s.requires_arc = true

  s.resources = 'lib/Resources/*.bundle'
  s.source_files = 'lib/Header/*.h'
  s.ios.vendored_libraries = 'lib/libBeeCommonSDK.a'

  s.dependency "BeeAFNetSDK"
  s.dependency "WSProgressHUD"
  s.dependency "Masonry"

end
