add_rules("mode.debug", "mode.release")

add_requires("cpr")
add_requires("nlohmann_json")
add_requires("fmt")

target("demo_xmake")
    set_kind("binary")
    add_files("*.cpp") 
    add_packages("cpr", "fmt", "nlohmann_json")
    set_languages("c++17")