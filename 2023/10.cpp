#include <iostream>
#include <string>

#define TEST_INPUT 0

#if TEST_INPUT

//*
constexpr size_t size = 3;
const std::string input[size] =
{
"S--7",
"|LJ|",
"L--J"
};
//*/

/*
constexpr size_t size = 10;
const std::string input[size] =
{
"FF7FSF7F7F7F7F7F---7",
"L|LJ||||||||||||F--J",
"FL-7LJLJ||||||LJL-77",
"F--JF--7||LJLJ7F7FJ-",
"L---JF-JLJ.||-FJLJJ7",
"|F|F-JF---7F7-L7L|7|",
"|FFJF7L7F-JF7|JL---7",
"7-L-JL7||F7|L7F-7F7|",
"L.L7LFJ|||||FJL7||LJ",
"L7JLJL-JLJLJL--JLJ.L"
};
//*/

/*
constexpr size_t size = 9;
const std::string input[size] =
{
"...........",
".S-------7.",
".|F-----7|.",
".||.....||.",
".||.....||.",
".|L-7.F-J|.",
".|..|.|..|.",
".L--J.L--J.",
"..........."
};
//*/

#else

constexpr size_t size = 140;
const std::string input[size] =
{
"-J.|..|7F-J7.J7F7.-77LJ-FL-F77F77F7|F-FLF7.F.FL7F-J.|.FF7-|-F7F7F7.FF-F7LL7FF-J7.----77-FF-..JF7.L-.FF|-F7--|7F77L7FF77F77.FL-7-L.FL7.FF-7..",
"|-JF7.J7F.LL7F7LL-7F-L7|||.-J7.L-J7.J.L|.|7L-L-|7JFFF-F77JLF|LJ|||.LFJLJ7LL-JL-|77|.FJF7LJJ-7|FF.|.F.|||LF-7|FJL|||||F-LJ|7JF|JJF7----JJ.L7-",
"|F|-L7L-7JLL-|J7||-|7LLJJ.7..J7F77J.F77-7LF77L7JF-L.|||L77LLL-7LJ|7||77FF7JFF.|.FJ-|L-7L7J|FJJF---7|.FLJ-||L-L7.|FL7JJ|L7|7--FJ.-J7FJFJ.FJ..",
"|7|F7J.LL7F7FJ-LJL.-|||7FF|-FJ.F|F--7.|.|LF77F|.|7FJ.LL7L7-LLFJF-J7-F7|L.--F7F|.7--|--|F--F|J|LL|LFJ77||FJ-|-||7L-|JL.7JLL7J.|-7L-JJ7J.FFJ-|",
"LJ||L.L.LJL-L|||.||JFJLL7-F-J---|J||7.F|J.||LJJFLJF|-LL|FJ.LLL7|J7|.||77|77||7LFJ|LL|-JJ|-7L-J7||7|F|.-J|.FF7LJ-.F77|F-F--7..|LF-7JFF777|-L.",
"L7L-.FJ.--F-|JFL7|7-L||.J7|FJ.|||.|L77F|-FJL7JF-.|FF7JFJL7J7JFJ|7F-7||J-LF-JL777F|.-J7-L--JL|JF-LF7-77J.|-F--7J-J7|7L7J||7.|F7FF.J--JJL7|.||",
"LJJFL-7-L-J-L.L.7|F-F77L.FJJFFF7FF|L||LLLL-7|F|7F-7|L-JF-J.FFL7L7L7LJ|-7FL7F7L-77-J.||.L|7L.|.LJ.||JF---7.|..|J||7LL-J7F--J.|7J-J.F||L-JJ-|7",
"F|J-LJ-7FLL-JF|7LFJF-77|7JF7FFJL7F7LF7|F|.FJL77-L7|L7F-J-F7LF7L7L7|F-JF-7FLJ|F-J|J|FJJL-JJ7.FJLFF|L7|F-7|-J7.L7-L7J7L-7J|J--J.||.-|--F..J..7",
"FF--.L7J7F.FF7|F||LF-LLLJ-FFF77.FJ|7.J-FL-L-7L77L|L-J|F7FJL7||J|FJ||F7|FJ-F-JL-7J.FFJ7||J-F-77FF7L7LJL7LJ.L7--|.LJF-JLF....FLF7J..|JLJJ7LF--",
"7J-...L.-L-LF7-FJ7FL-7.L-77L||JF|FJ-JJFF7.FL|FJF7L--7||LJF-J||FJ|FJ||||||.L-7F-J|L-JF-77F-L7L--J|F|F-7|F7-L77FL|7F7J.LJLJ7.F.LJFLFL7..L---||",
"...L--7||FJFJJLL|L|LJ-F-7.F-JL7FJL77|FFJL-7FJL7|L---JLJF-JF-J||FJL7||LJ|--FFJL7F7.FL|-FJLLLL---7L7||7LJ||77F7J.--7-77.-JLL7FFJF7||.L.F|.|-FJ",
"FFJJ7F-JJL-J7LFLJ.|7|J|F|FL-7FJL-7L--7L--7|L7FJL7F7F-7FJF7L-7LJL7FJLJF-J-F7L-7|||77-F77J7FFJF7FJFJ||-F7||F7||||7FFJLL7|.|-7JL77L-7J||7|FF-JJ",
"FFJ.LLJ..77.7-J..|77FF-7|F77||FF7|F--J|F7|L-J|F7LJLJFJL-J|F7L-7FJL7F-J7F-JL-7|LJL7-F||F-|-JF|LJFJFJ|FJLJLJ|||F-7J|7LF77-J7|L-F7|F|FJ|F7L.-7.",
"F7F-7-FJFF7.|.L|-LF7JL7|FJL-J|FJLJL-7F7||L7F7|||F7F7L--7FJ||F7||F-JL--7L-7F-J|F--JF7|L7JLLF-JF7L7L7LJF----J|||FJ-|7LF7JJF7J|FJL7-|J-|||77-7.",
"--|L--7-FFJ-|-.F7L|LF7||L---7|L-7F--J|||L7LJ|LJ||LJ|JF7||7|||||||F----JF7||F-J||F7|||FJ77LL7FJL7L7L-7|F7F7L||||F7F7FJL7.F.FFJF-J.L.F-7J7|FLJ",
"L7JLLL.F.|-7|J7||-F7|LJL7F--J|F7||-F7||L7L7FJF7LJF7L-JLJL-J|||||||FF7F7|||LJF7|FJLJ||L-7F7.LJF7L7L7FJLJ||L7|LJ||||||F-JFLF7|FJ7|-7|7F-7F--LJ",
"|J|.|-7.7|.-F-7||.||L-7FJL--7||LJL7|||L7L7|L-JL7FJL-7F--7F-J|LJ||L-J||||||F7|||L7F-J|F-J||-F7|L7|FJL7F-J|FJ|F-J|||LJL-7FF|||L--7FLJF7|FF-7.7",
"F7-LFFJ|L77|L7LJL-J|F7|L-7F7||L7F-J||L7|FJL--7FJ|F--J|F-JL7FJF-J|F7FJ|LJLJ|LJLJFJ|F-J|F-JL7||L7|||F-JL7FJ|J||F7|||F---J-FJ||F--J7JFJL77|FL7|",
"||JL|L-7JJFF.L7F7F7LJ|L-7||LJL-JL7FJ|.|||F---JL-JL-7FJL7F7LJFJF-J|LJFJF--7|F-7LL7||F-JL--7||L-J|||L-7FJ|FJFJLJ||||L7F7.FJFJ||F7F7F|F-JL|-FLJ",
"-.FFL7F|.F|J.LLJLJ|F-JF-J|L----7FJL7L-JLJL7F7F7FF7|LJLLLJL-7|LL-7L7JL7L-7LJ|FJF7|||L7F7F7||L--7|||F7||7|L7L7F7||||FJ|L7L7|FJ|||||FJL7JJJLJF|",
"LLFJ-J-L--JF7.LF-7||F7L-7L7|F7FJ|F7L---7F-J|LJL7|L7|F77F7F-JL7JFJFJF-JF-JF7||F|||||FJ||||||F7FJ||LJ||L7L7L7||LJ||||FJFJFJ||FJ|||||F-J..FFJ|-",
".L--7JFJ7LLJLJ7L7LJLJ|F7|FJFJ|L7LJ|F7F-JL-7|F-7|L7|FJ|FJ|L7F7L-JFJJL-7|F-JLJ|FJLJLJL7||||||||L7|L-7||FJFJFJ|L7FJ|||L7L7L7|||FJLJLJL--77|L-J|",
"LF77J|7LJ-FLFJFLL---7LJLJ|FJFJ-|F-J||L-7F-J|L7LJJ||L7|L7L7|||F-7L7FF7|||F---JL--7F--J|LJ||LJ|7||F7|||L7|FJ.|FJL7||L7L7L-JLJLJF-7F7F--J-777|7",
"LL|F-77-LF|JLJFF----JF--7|L7|F7||-FJ|F7||F7|FJF7FJ|FJL-JFJLJLJ7L7L7|LJLJL7FF7F7FJL--7L-7|L-7L7|||||||FJ|L-7|L7FJ|L7L7|F------J7|||L7JL--JFFJ",
".||JJL7---|-J-|L-----JF-JL-JLJLJL7L7||||||LJL7||L7|L---7L7F----7L7LJF7F--JFJ|||L-7F-JF-JL-7|FJ|LJ||LJL-JF7LJFJL7|FJFJ|L-------7LJ|FJ|..J.JJ|",
"FF|7FJJ|FL|-JLFF7F--7-L---------7L7|||LJ||F--J||FJ|F-7FJFJL---7|F|F7|LJF77L7LJ|-FJ|F7L---7LJL-JF-JL-7F--JL--JF7||L7|FJF7F7F7F-JF7|L--7.|FL|L",
"-L.FL.---7|..|FJLJF7L------7F7F-JFJ||L-7|||F7-|||FJ|FJL7L---7FJL7||LJF7|L7-L-7L7L7||L-7F7L--7F-JF7F-JL-----7FJLJL7|LJFJLJ|||L7|||L---J-F--|J",
"|.F|.7|||LJ-7FL---J|F-----7LJLJF7L7|L--J||LJ|FJ||||||JFJF---J|F7||L7FJ|L7L7F7|FJFJ||F-J||LF-JL7FJ|L-7F----7|L--7FJ|F-JF-7LJL7L-JL-7|||L||.J7",
"|-|J7L-F|JLLF7F--7FJ|LF7F-JF---J|FJL--7FJ|F-JL7|||FJ|FJFJF-7|LJ|LJFJ|FJFJFJ|LJL7L7LJL7FJL7L-7FJL7|-FJL---7LJFF7|L7|L--JFJ7F7|F-7F7L7FF7JLFF7",
"F---7F|LJ-FF||L7FJL7|FJ||F-JF---JL-7F7|L-JL7F7||||L7LJFJ|L7|F-7L7FJL||FJFJ|L7F7L-JF--J|F-JF-JL7FJL7L7F---JFF-J||FJ|F---JF-J|LJLLJL7L-77|LLLL",
".F|-|-F.-7-FJL7||F7LJL7|LJF7L-----7||||F7F-J|||LJL7L-7L7F7|||FJFJ|F7||L7|F-7LJ|F7FJ-F7|L-7L7F-JL7FJFJL7F77FJF7||L7|L--77L-7|-F7F7-L--JJL.F|J",
"FL.FLJL-LL.L-7LJLJL---JL7FJ|F----7|LJ|||LJF-J||F--JF-JFJ|||||L7L7LJ|||FJLJFJF7LJ|L-7|||F-JFJ|F7FJL7L7FJ|L7L-J|||FJ|F--JF7FJL7|||L---7-F.FFJ.",
"FJ.7|-.|L|.|.L--7F-----7LJFJL---7|L-7LJ|F7L-7|||F7FL-7L7||||L7|FJF-J||L7F-JF||F7|F-J||||F7L7|||L-7|FJL7|FJF7.|LJL-JL-7FJLJF7LJLJF7F7|--77|L7",
"|-FJ77FJ7|FF7F7-LJ7F---JF7L7F7F7|L77L7FJ||F-J||||L7F-JFJ|||L7||L7|F7||FJL7F7||||||F7|LJ|||FJ|||F7|LJF-J|L7||FJF7F7F-7LJF7FJL7F7FJ||LJJ--J|7|",
"JL|.FJ.LLFFJLJ|.F7FJF---JL7|||||L7|F7||J||L-7||||FJL7FJ7|||FJ||F||||||L7FJ|||||||||||F-J||L7|||||L-7|F7L7||||FJLJLJFL7FJLJF7LJLJF||JLJ-L7J-L",
"|.L-|LFL||L--7L-JLJFJF----JLJLJL-JLJ||L7||F7|||||L7FJ|F7||||FJ|FJ|||||FJL7|||||||LJ|||F-J|FJ|||||F7||||FJLJLJ||F----7|L---JL----7LJ7F.F7...|",
"JFF.J---F|JLL|F7F-7|7L------7F7F7F-7|L7||||||||||FJ|F||LJ||LJFJL7|||||L-7||LJ||||F-J||L7FJL7||||||LJ||||F---7L-JF---JL7F---7F7F-JJ7L|-J7---7",
"LLFJ.L|JL|J.LLJLJFJ|F-------J|||||FJ|FJLJLJ||||||L7|FJL-7|L7FJF7|||||L7FJ|L7FJ|LJL7FJL-JL-7||||||L-7||||L--7L---JF7F7.|L--7||LJ||J|-7FLL.J7|",
"|F|J7LJ..J--|F---JFJL7F7F7F-7|LJLJL7|L---7FJ|||LJ|LJL7F7|L7|L7|||||LJF||FJFJL7|F--JL--7F--J|||||L7FJ||LJ|F7L--7F-JLJL7L-7FJ|L-7J7-F-L-JL7.|-",
"JJ.|L--7777LL|F7F7|F-J|||LJFJ|F----JL7F-7|L7||L-7F---J|LJFJL7||LJ|L--7||L7|F7LJL7F-7F7|L7F7|LJ||7|L7LJF--JL--7LJF----JF7LJJL--J|..F77JFLL7L7",
"LF-77-7J-L--LLJLJLJL--JLJF7L-JL--7F77LJ.|L7LJ|F7||F--7L-7L7FJLJF7|F7FJLJFJ||L---JL7||||FJ||L7FJL7|FJF7L-----7L-7L-----J|F------7-FJ|.FJ.L|LL",
"FL7|--|LJ.L7.L|F7F7JF7F7FJL--77F7LJL---7L7L7FJ|||LJF7|F-J||L-7FJLJ||L--7|FJ|F---7FJLJ|||FJ|FJL-7|||FJL-7F---JF7L--7F---JL7F--7FJFJFJ.|.7-J.J",
"7.F.|.J---FL-JF||||FJ|||L--7FJFJ|F7F---J|L7|L7|LJF-JLJL--7|F-JL7F7|L-7FJLJFJ|F-7|L-7FJ|LJ7|L7F-J|||L--7|L----JL7F7LJF7LLFJL-7LJ.|FJJ7J-J.J7|",
"|-L|JFJJ7.7-|F-J|||L7||L---J|.L7||LJF----7LJ-||F-JF-7F7F-JLJF--J||L-7|L--7L7|L7LJF-JL7L7.FJFJ|F-JLJF-7||7F7F7F7LJL-7|L7FJF--JLF-J|FL|---7.|7",
"-7LLLJJ-77|.FL-7|||J||L----7|F7||L--JF7F-JF7FJ|L7FJFJ||L---7|F-7|L7FJL7F-J.LJF|F7L--7L7L7|FJFJ|F--7L7LJL-JLJLJ|F-7FJ|FJ|FJF7JFL-7|F7JFJL-.L7",
"L|-.F.L7LLJJ.LFJLJL-JL-----JLJLJL7JF-JLJF-J|L7L7LJ|L7||F7F-JLJ||L7||F-JL--7F--J||F--J||FJLJ7L-JL-7|FJF-------7|L7|L-JL-JL7|L7JF7|LJ|L||FJ7F|",
"FJ|.F----L|L--L------7F--7F7F---7L-J|F7FJF7||L7L-7F-J||||L-7FF7L7|||L-7F--JL--7||L--7FJL--7F7F---JLJFJF------J|FJ|F--7F-7LJFJFJLJF7L-7F7|LL|",
"|LL-7JJLF7-LJF7|F----J|F7LJLJF--JF---JLJFJLJF7L7FJ|F7||||F7L-JL7|||L-7|L-7.F--J||F7FJ|F--7||LJF-----J7L------7LJFJ|F7|L7|F7L-JF--JL--J-J|.||",
"|.L-LJF.|.L|-||FJF7F--J||F7|FJF-7|F-----JF7F|L-J|.||LJ||LJL7F7FJ||L7FJ|F-JFJF-7||||L7|L-7||L7FJF-----7LF---7FJF7L7LJ||FJ|||F-7L----7.LJ-7-FL",
"|.L|J.FJ|FF-FJ|L7|LJF7FJ||L-JFJ|LJL------JL7L7F7|FJL-7LJ|F-J||L7LJFJ|FJL7LL7|FJ||||FJ|F7|||FLJFL---7FJFJF-7|L7||-L--JLJL||LJ-|F----J7FL--7J|",
"--FF.JJL|7F7|FJJLJLFJLJFJL--7|JF-----7F7F7FJLLJLJ|F-7L7F-JF7||FJFFJFJL7FJF-J|L7|||||L||LJ|L7F-7F-7FJL7L7|FJ|FJ|L------7FJL--7|L-7F---7.FF--7",
"|-7.F7|LJ-|LJ|-F7F-JF-7L----J|FJF7F-7LJ||LJF----7|L7|FJ|F7||||L-7L7L-7|L7|F-JFJ|||||FJL-7L-JL7|L7|L-7L7LJL7LJFJF-7F--7||F-7FJ|F7LJF7FJ--|J-.",
"|FLLJ7L7|||F7L-J|L-7L7L7F--7FJ|FJ||FJF7LJF-JF---JL7|||L||||LJ|F-JFJF7|L7|LJF-JFJ|||||F7FJLF--JL-JL-7L7|F--JF7L7L7|L-7||||J|L7LJ|F-J|L7.|.||.",
"LL7.L7-F7-LJL--7|F7L7L7||F7||FJ|LLJL-JL-7|F-JF-7F-J||L7||||F-JL-7|FJLJFJ|F-JF7|FJ||||||L-7L-------7L-J|L---JL-JFJL--JLJ||FJFJF-JL-7L-J--JLLF",
"77LF-7|LJ.|LLF-JLJ|JL-JLJ|LJ|L7|F-------J||F-JFJL--J|FJ||||L-7F7|LJF7JL7|L7FJLJL7|LJ||L7FJF------7L--7|F---7F-7L---7F77LJ|FJ|L-7F-JF77-J..L|",
"LJJ.-J7JFLJJFJF7F7L7F7F-7|F7|JLJL--------JLJF-J-FF-7|L7LJLJJFJ||L--JL-7LJL|L--7FJ|F-JL7LJ-L-----7L---JLJF-7|L7L7F-7LJL7F7LJF---JL--JL777F7.|",
"LL.FJLF.|||-L-JLJL7LJ|L7|LJLJF7F7F7F7F------JF-7FJFJ|FJF7-F-JFJL7F-7F7L7F-JF7FJL7|L---JF-7F-7F--JF7F7F-7|FJL-JFJL7|F7FJ|L-7L-7F7F7F-7|-LFL7|",
".LL-.FJFLF---7JF7FJF7L-J|F-7FJLJLJLJ||F--7F7F|FJ|FJ-|L-JL7L-7|F-J|JLJL7|L7FJ||LFJ|F---7L7|L7|L-7FJ|||L7LJL--7-L7FJLJ|L-JF-JF7LJ||LJLLJJ.|-|J",
"LF|J.J.|LL--7|FJLJFJL--7|L7|L----7F7LJ|F-J|L7|L-JL-7L----JJ||||F-J|LLJLJF|L7LJ-|FJL7F7L-JL-JL--J|FJ|L7|F----JF7LJJF7L--7L--JL7JLJ||LL.F-J-J.",
"|F-J..FF-7F-JLJF--JF---J|FJ|F7F--J|L--JL-7|FJ|F----J-F7|FF-7LJ|L-77F|||J-L-JF7FLJF7LJL7F-------7|L7L7LJL--7F7||F-7||JF7L----7L--7777..77LL7.",
"L77L|7JL7|L---7L7F-JF--7|L7|||L---JF7F7F7||L-JL-----7|L--JFJF-JF-J-JJ7.|L|JL|L-7FJL--7LJF------J|FJFJF----J||||L7||L-JL----7L---J--7J-LF.||7",
"F-7J|J.FJL7F--JFJL7FJF7|L-JLJ|FF7F-JLJLJLJ|F7F7F7F--J|F--7L7L--JJ.FJFF7|.|7F|F7LJF--7|F7L7F-7F7FJL-J|L-----JLJ|F|||F7F7F7F7L--7FLJ.J|.L-.JFJ",
"LJLFL7-L-7||F-7L-7||FJLJF---7L-JLJF----7F7||LJLJLJF7FJL-7L-J|7L7FJJF|L|7F77LLJ|F7|F-JLJL-JL7LJ||F-----7F7F7F7FJFJLJ|LJLJLJ|F--J-J..|FF7-J.LJ",
"LF-FF7-F7||||FJF-JLJL7F-JF7FJF7F--JF7F7LJLJL7F7F-7|||F--JF7F77JL|..-F7LJ||F.J.LJ|||F7F-7F7FJF7LJL----7||LJ|||L-JF-7L-7F--7|L-77|FF-7-LJ7.7JF",
"FF-FJL7||||LJL-JF-7F7||F-JLJFJLJLF-JLJ|F-7F7LJLJFJ|||L---J||L777LLJL|L7FL-77.LF-J|LJ||7LJ||FJ|7F-----JLJF7LJL---J|L-7LJF7|L-7L7-L|FJJJ-77LFJ",
"F|FL-7LJLJL7LF7FL7LJ|LJL----JF---JF--7LJJLJL-7F-JFJLJF7F7FJ|FJ7-LJJFJJ--..L77LL-7|F-JL7F7LJL7L7L7F-7F7F7|L---7LF-7F7L--JLJF7L-JFL|L-77FJ|-LJ",
"FFJJLL7F7F7L7||F7L-7L-7F7F7F7L----JF-JF-77F-7LJF7L-7FJ|||L-JL-7-JJ.FFJLF-L-7-LJJLJL7F-J||F7L|FJ|LJ7LJLJLJF7F7L7|FJ|L--7F7FJL-7LJ.|F-J-7J|J|7",
"L-J.|FJ|LJL7|||||F7L-7LJLJLJL------JF7|FJFJFJF-JL--JL7LJ|F--7FJ||.77J|-FJ-LJL-|JF||LJF-JLJ|FJL7F7F7F7F---JLJL7LJL-JF-7LJ||F--J..F||...LF7|L|",
"|L-F-L-JF-7|||||LJ|F7L--7F----------J||L7|FJFJF---7F7L-7|L7|LJ|-J-LF.LJF7.|7...LF-F--JF7F7LJF7LJ||LJLJF---7F7|F7F7FJL|F7LJL7F7F7FJL--7-||7-J",
"|LL|7|LLL7LJLJ|L-7LJ|F--J|F----7F7F--JL7LJL7L7L7F7|||F7|L-JF--7-.LF|J7.J-L|7F-7.|.L---JLJL--JL-7|L----JF--J||LJLJ|L-7LJL--7LJ|||L7F--JF||.LJ",
"FJLJ-JF|L|F--7L-7L-7||F7FJL---7|||L--7FJF-7L7|FJ||LJLJLJF7FJF-J.|.JJFJ-|JL7.7L|--F7F-7F-7F-----JL---7F7L-7J|L---7L--J-F--7|F-J|L7|L-7JF||7F|",
"L-7LF-77-LJFFJF7L--JLJ||L-7F-7|LJL7F-J|FJFJFJ||FJL7F7F7||LJFJ||-F.LLL7F|||J|-7LJL|LJFJL7|L---------7|||F7L7|F---JF7F7FJF7|LJF7L7LJF-J.FJL--7",
"LFJ.F--7FF--JFJL--7F--J|F7|L7|L--7|L--JL7L7L-J||F-J|LJL7L-7L--7L-7J..FJ.LFF-J7FF-JF7L7FJL----------JLJLJL-J|L---7|||LJFJLJF-JL7|F-JF7FJF--7|",
"F|L-L-7L7L7F7|F---J|F-7LJLJFJL---J|F-7F7L7L--7LJL7FJF7FJF7|F--JLJ7F7-FJFLJ|J|--L--JL7|L------7F7F--7F7F----JF---J|||F-JF77L7F-J||F7|LJFJJLLJ",
"FL.L|LL7||LJLJL7F-7|L7L7|F7L-7F7F7LJLLJL7L--7L7F7LJFJ||FJ||L-7F7JF7F7JF-JJLF7.LJ|LF-JL7F--7F7LJLJ-FJ|||F----J-F7FJLJL7FJL7FJ|F-JLJLJF7L7.|L|",
"L-F-|-L||F-7F-7LJ7LJJL7L-JL--J|LJL--7F77|F7FJ|||L-7L7LJL7||F-J|L-JLJ|J|L77F-JFF|||L--7|L-7LJ|F-7F7L-JLJL-7F7F7|||F---JL7FJ|FJ|F-7F-7||FJ.F-L",
"JFJLF--J||FJL7|F7F77F7L-------J7F7F-J|L7|||L-7|L-7L7L7F7||||F7|F--7FJLJ|LLFJJLF-7F7F-JL7JL-7|L7|||JF7F7F7LJLJLJLJL----7||FJ|FJL7|L7LJ|L--7.J",
"||-FL--7LJL7FJLJLJL-JL7F--7F--7FJ|L7F|FJLJL--JL-7L7L7||||LJLJLJL-7LJJJJF77|L7.L7LJ|L7F7L---JL-JLJL-JLJLJ|F7F7F7F7F-7F-J|||FJ|F-JL-JF7|F--J-|",
"|.F|JJLL7F7LJF7F7F---7|L-7|L-7|L7L7L-JL---7F---7L-J||LJLJF7F-7F--JF-7FL|FF--7F7L-7L-J|L--7F7F7F-----7F-7LJLJ||||||J|L--JLJL-JL-7F--J|||J||J.",
"F7.|J.|LLJL7FJLJ|||F-J|F7||.FJL7|FJF------J|F--JF--7|F--7|LJ|||JF-JFJJ-LLL-7LJ|7.|F7FJF--J|||||F-7F-J|L|F--7LJLJ|L7L7F-7F--7F--J|F-7|LJ.-|F|",
"||FF7LJ-LL-LJ-F7||FJF7LJLJL-JF7LJL-JF--7F--JL7F7L7FJ|L-7|L--7||FJF7|FJ.|.|LL-7|FFJ|LJFJF-7|||LJL7LJF7L7LJF7L---7|FJFJ|F|L-7|L---JL7||JL|FL||",
"7-F7-J..LLF---JLJ|L-JL------7|L7F7F7L7FJ|F---J|L-JL7L-7|L7F-JLJ|FJ||J.F7F7FF7||FJFJF7L7L7|||L7F7L7FJL-JF-JL----J||LL7L7L7FJL7F-7F-JLJ..|7FJJ",
"--FL7F-7FFL-7F7F7|F-7.F-----JL7||LJL-J|||L---7|F--7L-7LJFJL--7FJ|JLJ-F||||FJLJ|L7|FJL-JFJLJL7||L-J|F---JF7F-7F7|LJF7L7|FLJF7LJ-LJF7-F-||--..",
"FFFJLJ..||LFJ|LJLJL7L7L----7F7|LJF---7L-JF---J|L-7L7FJ-FJF7F-J|FJ77.F7||||L7F-J|LJL7F-7L-7F-J||F--JL-7F-JLJFJ||F7||L7|L---JL--7F-JL7--7J7|-|",
"JJJFL77LL7LL-JF---7L7L-----J|LJF-JF7-|F-7L7F--JF7|7LJ||L-J|L7FJ|F77FJ|||||-||LF---7LJFJF-J|F-JLJF----J|F---JFJLJL-JFJL-7F7F7F7LJF--J|LJL-|-7",
"JJ.|FLJ|L|.FLFJF-7L-JF-7F7F7|F-JF-JL7|L7L7LJF--JLJF7F7FF7F|FJL7||L7L7|||||FJL7L7F-J7FJFJF7LJF7F-JF----JL---7|F-----JF7FLJ|||||F7L-7-J7L-.F-J",
".|7.F7|7.77--|FJJL--7|FJ|LJLJL--JF7FJ|FJF|F7L----7|||L-JL7LJF-JLJFJFJ||LJLJF-JFJL7F7L-JL|L--JLJF7|FF---7-F-J||F7F---JL-7FJ|LJ||L7FJ-F7.|7|L-",
"777FJF|7-J7JF||F-7F-J|L-JFF--7F7FJ|L7|L-7LJL7F---J|||F---JF7L-7F-J7L7|L-7F7L--JF7LJL7F--JF--7F7|LJFJF-7L-J7FJLJLJF-----JL7L-7|L7LJ7.F-.--J-J",
"L|-7-7JL.L-7-LJL7LJF-JF--7L-7|||L7L-JL--JF-7|L--7||||L--77||JFJL--7.|L7L||L--7FJL-7FJL---JF7LJ||F-JFJFJF---JF----JF7F---7L--JL-J-|-F-7|J7L7L",
"||7.7J7|FLL||7F7L-7L7FJF7L7FJLJL-JF7F7F7-|FJ|F7FJFJ||F--JFJ|FJF--7L7L7L7LJF77|L--7LJ.F--7FJ|F7|||F-JFJFJ-F--JF---7|LJF-7L7F-----7F7.FF|F|.|7",
"FJF7L7FL7|7|FF|L7LL-JL-JL7LJF-7F--JLJLJL-J||LJLJ-L7||L7F7|FJL7L-7L-J-|FJF7|L-JF--JF-7L-7|L7|||LJLJF7L7L7FJF7F|F-7LJF-J-L-J|F---7LJL7FL.FLF-F",
"J7|7F|7.|L|JF7|FJF-7F--7LL--JJLJFF7F------JF77F7F7|||FJ||||F7|F-JF7LFJL7||L--7L7F7L7|F7||FJLJ|F-7L|||L-JL-JL-JL7L-7L7F--7|||7F7L---J7|F|FJF|",
".FJ||J.FJJ|FJLJL7L7|L-7L------7F-JLJF7F----JL7|LJ||||L-J||||||L7FJL7L7FJ||F-7L7LJL-J||||||F7FJ|FJFJL--7F7F-----JF7L-JL-7L-J|FJL7F7F7LF77-JFJ",
"77-FJ7FLJJFL---7|FJ|F7L--7F7F7LJF7F7|LJF7F-7FJL-7||LJF7FJ|LJLJFJL7FJFJL7|||FJFJF----J||||LJ||FJL-JF7F7LJLJF--7F-J|F7F77|F7FJ|F7LJLJL-JL7.FFJ",
"7-F|L7JJL-FF-7FJLJFJ||F7FJ|LJL7FJLJLJF7|LJ|||F7FJ||F-JLJFL-7F7L--J|FJF7LJ||L7|FJF7F7FJ|||-FJ|L7F7FJLJ|F---JF-JL-7LJLJL-J|LJ7||L-7F-7F--J7FF-",
"--JJ|||.F.FL7LJF-7|FJLJLJFJFF-J|F----JLJF-7LJ||L7LJL7F77F--J|L----JL-JL-7|L7LJL7|LJ|L7|||FJFJ.LJLJF7||L7F-7|F7F-JF7F7F-7L---JL-7LJFJL-7.LF|.",
"JLL.FJ77|7F7L-7|FJLJF----JF7L--JL-------JFJ|FJL-JF--J|L7L--7L7F7F-7F7F7FJ|L|F--J|F-JFJLJLJFJF7F7F7|L7S-JL7LJ||L7FJ||LJFJF7F-7F7L7FL-7FJ7||L|",
"L7..||L-F-JL--J|L7F7|F----JL--7F7F7F-----JF7L---7|LF-JFJF-7|FJ||L7||LJ|L7L7|L7F7||F7L-7F-7|7|||||||FJF7F-J-FJL-JL7|L-7L-J|L7LJL-JF-7LJ-F77.7",
"||7-LLJFL--7F7FJJLJ||L-7F7F7F7LJLJLJF---7FJL7F--JL7|F7L7L7LJL-JL7||L-7|FJFJ|FJ||||||F7LJJ||FJ|||||||F||L---JF7F7FJL-7|F7-L-JF7.F7|FJJ-FJL-.J",
"J.|L||FFFL.LJLJF---JL77LJLJLJL-----7|F-7LJF7|L--7FJ||L-JJ|F7F---J||F7||L7|FJ|FJ||||LJL7-FJ||FJ|||||L-J|F7F-7||||L--7|LJL----JL-JLJL7|7.|||F|",
".7|LFJ-|JL|||L7L---7FJF7F-------7F7LJ||L--JLJF7||L7||F7F7LJ|L7F-7||||||-|||FJ|FJ||L--7L7|FJ|L7|||LJF--J|LJJ|||||F7FJL-7F--7F7F--7F-JF7F-7-LJ",
"-77-L|F7JF777.FF---J|FJLJF7F7F-7LJL-7L--7F7F7|L7L7|||||||F7L7||FJ|LJ|||FJLJL7|L7||F7JL7||L7L7||||F-J|F7L--7||||LJLJF7FJL-7||||F7LJF7|LJFJ-|J",
"|L|7--L|-7.LF--JF-7FJL7F7|LJLJJL---7L7F-J||||L7L7|LJ||||||L7||||FJF-J||L--7FJ|FJ|||L-7||L7|-|||||L--7||F--JLJLJF--7||L7F7||||LJL7.||L7FJJ-F-",
"|FL7-L7L---JL--7L7||F7LJLJF7F7JF--7|JLJF7|||L7|FJ|F-J|||||FJ|||||FJ-FJ|F7FJ|FJL7|||F-J|L-J|FJ||||F--J||L-7JF---JF-J|||LJLJ||L7F7L-JL-JL7|L7|",
"FL-|.LLL7|7|L7.L-JLJ||F---JLJL-JF7LJF7L||||L7|||J||F7||||||J||||||F7|FJ||L7|L7FJ||||F7L7F-JL7|||||FF7||F7L-JF7F7L7FJL---7FJL7|||F--7F7FJ7.77",
"7LF-JJLFF|--LJ7LF7F-J|L---7F7F-7|L-7|L7|LJ|FJ||L7|||||||||L7|||||LJ||L7|L7||FJL7||||||FJL7F7|||||L7||||||F--JLJ|FJ|F----J|F7||||L-7LJLJJJFL7",
"||.||F.FJ|JJ|7FFJLJF7L---7LJLJFJ|F-JL7||-FJ|FJL7LJ||||LJ||FJ|||||F-J|F||FJ||L-7LJ||||||F-J|||LJLJ-LJ|||||L----7|L-JL----7||LJ|||F7L-77JJ.LJ|",
"FFJ-JJ|J.F7-L-FJF7FJ|F-7FJF7F-JFJL-7FJ|L7L-J|F-JF-J||L-7||L7|||||L-7L7||L7|L7FJF-J|||||L--J|L7F-----J|LJL7F7F7|L7F-7F---J||F7||LJL7FJ7J.F7-J",
"|LF7.L|7F--7J.L-J|L7LJFJL-JLJF7|F--JL7L7|F--JL-7L-7||F-JLJ-LJ|||L-7|FJ||.LJFJL7L7FJ||||F---JFJL---7F7L--7||||LJJLJFJL-7F7|||LJL7-L|L7J-7-FJ|",
"|F-L7-L-J7J|7L.LFL-JF-JF-----J||L-7F7L7|||F-7F7|F-J||L-----7|||L7FJ||FJL--7|F-JLLJFJ|||L7F7FJ7F--7LJ|F7FJLJ|L----7|F7FJ||LJL-7FJ|F|FJ7L|.7-|",
".|JLJ.L|-77||7-F7|F7L-7|F-7F--J|F-J||FJ||LJFJ|LJ|F7|L7F----JFJL7|L7|||F7F-J|L---7FJFJLJFJ||L-7L-7L--J|LJF7.L7F7F7|||LJL||F7F7|L-7FJL---7J|.J",
"7LFJ..FF--|J.FF|L-JL7|LJL7LJF-7||F7|||FJ|7FJFJF7LJLJFJL-7F7|L-7||FJ||LJ|L-7L7F7FJL7|F--JFJ|F7L-7L---7L--JL7FJ|LJ|||L7LFJLJLJ||F-JL-7F--JJ-F7",
"L-77-L-L-|.L7--L7F-7|F7F-JF7|F||||||||L7L7L7L7||F7-FJF-7LJL--7LJ||||L-7|F7L7||||F-J|L7F7L7|||F-JF---JF----JL-JF-J|L7L-JF7F-7|||.LJF||JJ.|-J7",
"F-J|J|FJ|.|.LJ|F||FJLJLJF-J|L7||LJ||||LL7L7|FJ|LJL-JFJFJF-7F7|F-JL7L7FJ|||FJLJ||L-7|7LJL7|LJ||F7L-7F7L-------7L7FJLL7F7|LJFJ|LJJ-L-LJJ.F|7||",
"JF-|F7|.-|LL-F-FLJ|F7F7FJ7FJFJ|||FJ|||F7L7|LJ|L-7F-7L7|FJL||LJL7F7||||FJ||L-7-|L7FJ|F---JL7JLJ|L--J||F7F-7F7FJFJL-77LJ|L-7|FJ.||.LJ.||7FL-7F",
"FL.J-L77J.|7.FFLJFLJ||||F-JFJFJL7|FJLJ||FLJF7F--JL7|FJ||F-JL7F7|||L7||L-J|F7L7|FJL7|L7F7F7L7F-JF7F7|LJ|L7LJ||FL7F7L--7L--JLJ|.|---JF-JLL-LJ|",
"L7.LF|J77-F7F7JJ7FF-J|||L7FJFJF7|||F--JL---JLJF-7FJ||FLJL-7FJ|LJ|L-J|L7F7LJL-J|L-7||FJ|LJL7||F7||||L-7L7L-7||F-J||F-7L7F--7J7.|FF.F||FJ|||-J",
"|-|FL|-LF-LL|LL.L7L-7|LJ-|L7L7|||LJL7F7F-7F-7FJFJ|FJL--7F7||FJF7L--7L7LJL----7L-7|||L7||F-J|||||||L7FJJ|F-JLJL-7||L7L7LJF-J7F7||LL-J-F7||L-J",
"7LLFL||.L7.|L7LF7FF-J|7F-JFJL||||F7LLJLJ7|L7LJFJFJ|F7F-J|LJ|L7||F7FJL|F7F-7F7L-7LJ||FJL7L7FJ||||||FJ|F-JL7F7-F7LJ|FJJ|F7L-77|-FLF7||.L7-|7L7",
"-77FF|-7J|L|JF--7|L--JFJF7L-7|||LJL7F----JFJF-JFJ|LJ|L7FJF7|FJ|LJ||F7|||L7|||F7L7-LJL7FJFJL7LJ||LJ|FJL7F7LJL7|L-7||FFJ||F7|77.LLJFL.F-L7JF.-",
"L-J-|LLJJFJJ7||LF7J|JLL-JL7FJLJ|F7FJL7F7F7L7L7FJF---JFJL7||||FJF-JLJ|LJ|FJLJ||L7L77|FJ|L|F7|LFJL-7||F-J||F-7LJF-J|L7|FJLJ|L-7J.|.FJFF.||FJFJ",
".|||J..-J|L|FLJ-|J|L--F---JL--7|||L-7LJLJL7|.LJFJF--7L-7||||||7L-7F-JF7|L-7FJ|-L7L7-L7|FJ||L7L7F7|LJL7FJLJFJF7L7LL7|LJLLJL--J-FL.L7-|7L77.77",
"--J----|.-F|||7.|-L7|LL--7F7F7||||F7L7F---JL--7L7L-7L7FJ||LJ|L-7FJL--J|L--JL7L-7L7L7FJ||FJ|FJFJ||L--7|L-7.L7|L7L-7||.J7L|J-LL.-.7F7||L7.LL.7",
"L|L|7J.-7.J.FJJ-|..-JLL-FJ|||LJLJ||L-JL-7F-7F-J-L7FJFJ|FJ|F-JF-JL7F7F7L--7F-JF7L7|FJ|FJ||FJ|FJFJ|F-7|L7FJF7LJ|L7FJLJF|JFL--F|L|FJ-|J7FFF.F|J",
"FJ-LF.-JFJLLJJJ7L|7|LL.-L7||L-7FFJL7F---J|FJL7F--JL7L7|L7|L-7|F7L||||L7F7||F7||FJ|L7||LLJL7||FJFJL7||FJL-JL--7FJ|-L|77-|FF.-JFLJLFJL77LJFFL7",
"|J7FJ7.||||..J.--LFJ-7|7FLJ|F7L7L7FJL7F7FJL7FJL-7F7|FJ|FJ|F-JLJL7|||L7||||||||||||FJ|L7F--J||L7L7FJLJ|F7F-7F7|L7L7.LF|J|7JJ.JFL-FJJJL7.|L|L|",
"-JF|.F77L7F-LJ.FL7L|F---F-LLJL-JLLJ7L||LJF-J|-F-J|LJL7|L7|L7F7F7||||FJ||||LJ|||L7||FJFJ|F-7||FJFJ|F7FJ|||FJ|LJLL7L77...LL7-|7|.FFJ.FFF-7JJ|J",
"|7L-F-J-.L|.FF.FL|FFLJ-7J.||-|7|F7F--J|..L-7L7|F7L-7FJ|FJL7|||||||||L7||||F-J||FJLJL-JFJL7|||L7L7LJ||FJ||L7L7J-LL7L7--L.F--LJJJ|J|-FLJLFJFF7",
".L|F|||L..|F-JFLJLJJJ.L7-|F|F|FF|-L7F7|7|7FJFJLJ|F-JL7|L7FJ||LJ||LJL-J|||||F7|||F7FF7LL--J||L-J|L7FJ||LLJJL-JL-J|L7||-|-|.FF|J||FJ.-F7J|F|.|",
"|.L-JL-|7F7.LFFL7JFJF7.J|.FLJLLL||FLJ|L-77|FJJFFJL7|JLJ.|L7||F-JL----7||||LJLJ|LJL-JL--7JLLJL|||JLJJLJ7L|-J.J|.||-||J|F-L-L7LFJ.L..|LJLFJ|7J",
"|-L-7-L7F|J.FF--F-J.||LFF-L7|-7LJLJ|LL-7|FJ|JJFJF7L7|F--JFJLJL7F--7F-JLJLJ7F--JF7F-7F7FJ-LJFLLF77L.F|J7FJFL---.-J-LJJ-J|--LJF|JF.FFJ-FFF-J.|",
"7FJ-|FF|7|FL-J.F7J.7J7L7|FJL7-F-J-L7-L7LJL-JJFL7|L7L7|F-7L7F--JL-7|L7F7|F-7L-7FJ|L7||||F-7JF7FL---7.F-L||LJ|7L7J|.|.LJL|-7LJ7F--F-7L---FJLF-",
"J-.||L7JL7LJF---.--FJ||.LJ||J-L7LF.|7FF||L|J7|FLJFJFJ||FJFJL7F7F-JL7LJL-JFJF-JL7L-JLJLJ-L7-|JLLJFLL7|7-|F--L7FL-JFF|FFL|FJ-J|LF.L7JL.FJLF-||",
"L|.L7JL7FFJ7F7JFJ|FL-|7.|L|.|..||LLL7-F-J.JJL|-L7L7L7||L7|F-J|||F77L-7F7FJ-L--7L--7F|FJ.LL7-J||.JJF---.F77LLJ.L7F--J-|7|7|LF|.|7JL..F7J-LF-7",
"||-J||FL|J-|L|L77FL.FJFL|J.FF-J7-7..|F7-|F|FJL|-J7L7|LJ-||L7FJ|LJL--7||LJ7LLF-JF-7L7L-J..-.LLJJ7..F-7..|LF--L|FFLJ7|.-LL|JFFJ.JL7.FFLLJF-J|J",
"FF7FJFFJ|F--J|7L-7-7-J||.F7J.--F.|-7-F|.7--F7L|.|-L||LF-J|FJL7L7F---JLJJLJ.LL-7L7L-J-7|7L..-7||JFF77..-FJLJ-FJFJ..-|7.JJ.|7FJJ7LJFL-7LF7J7|.",
"FJLL-7JLLF-|7L7.|L||..F|7-JJ7.FJFJ.L7.L77L||L7JF|7.LJ.L7FJL7FJFJL7F7-J7.F.F7-|L-J.LL-|.JJFFL77J.F7J|77L|-7J-FF7L77LFJJ.LFJFL.FF7||-|7|LJ7-|7",
"L7||.|.-JLJ|.F|-.FFJ..||.7J7-JJFL7|LJ-.LJ.L|L--J||.|.FL||F-J|FJF7LJL7-L.LF.F-J-|J.LL-JFJLFLJF-7F-F-L--FJF|7-L.|--FF-JJL7J-|LJF7F7JLJ--LLJF|J",
"FFF7J|.|.LF|.7JJ--LJF-|LFJFJJ7F|LFL7J|FJ|.F|-|JF|L-L77FLJ|F-JL7|L7F7L7FJL|.F.J.||FF7LF|F7LL7FFJJ7L-7J|||7.F-|.J.F-J.|.LF-F-JL|L7|L.FLFJJ.FJ.",
"7.LJL---7.LL--7J-JLLJ.|LLL-J-7--..JL-JLJ--FJ-|----LLL--JLLJ-LLLJLLJL-JJJ.L-.|JFLJJ.LJ..F.7--LL.JJ-LLJF-JL-JJF-JFJJ.F-7L--|J.LL.-JL-L.|-----L",
};

#endif

struct Pos_t
{
    ssize_t x = 0, y = 0;

    bool operator <=> (const Pos_t&) const = default;
};

Pos_t find_start()
{
    for(ssize_t y = 0; ; y++)
    {
        ssize_t x = input[y].find("S");
        if (x != std::string::npos)
        {
            return {x, y};
        }
    }

    return {0, 0};
}

constexpr Pos_t left(Pos_t pos)
{
    return Pos_t{pos.x - 1, pos.y};
}

constexpr Pos_t right(Pos_t pos)
{
    return Pos_t{pos.x + 1, pos.y};
}

constexpr Pos_t up(Pos_t pos)
{
    return Pos_t{pos.x, pos.y - 1};
}

constexpr Pos_t down(Pos_t pos)
{
    return Pos_t{pos.x, pos.y + 1};
}

std::pair<Pos_t, Pos_t> move_from(Pos_t pos)
{
    switch(input[pos.y][pos.x])
    {
        case '-': return {left(pos), right(pos)};
        case '|': return {down(pos), up(pos)};
        case 'L': return {up(pos), right(pos)};
        case 'F': return {down(pos), right(pos)};
        case 'J': return {up(pos), left(pos)};
        case '7': return {down(pos), left(pos)};
        default: return {pos, pos};
    }
}

bool connected(Pos_t from, Pos_t to)
{
    if(from.x < size &&
       from.y < size &&
       to.x < size &&
       to.y < size &&
       (from.x == to.x || from.y == to.y))
    {
        auto dest = move_from(from);
        return dest.first == to || dest.second == to;
    }

    return false;
}

template<typename _F>
void traverse(Pos_t start, Pos_t pos1, _F f)
{
    auto pos2 = start;
    while (pos1 != start)
    {
        f(pos2, pos1);
        auto dest = move_from(pos1);
        pos2 = dest.first == pos2 ? dest.second : dest.first;
        std::swap(pos1, pos2);
    }
    f(pos2, pos1);
}

size_t part1()
{
    auto start = find_start();
    auto pos1 = start;
    auto pos2 = start;
    auto pos = &pos1;

    *pos = left(start);
    if (connected(*pos, start)) pos = &pos2;
    *pos = up(start);
    if (connected(*pos, start)) pos = &pos2;
    *pos = right(start);
    if (connected(*pos, start)) pos = &pos2;
    *pos = down(start);
    if (connected(*pos, start)) pos = &pos2;

    size_t total_move = 0;
    traverse(start, pos1, [&](const Pos_t&, const Pos_t&){total_move++;});
    return total_move / 2;
}

size_t part2()
{
    auto start = find_start();
    auto pos1 = start;
    auto pos2 = start;
    auto pos = &pos1;

    *pos = left(start);
    if (connected(*pos, start)) pos = &pos2;
    *pos = up(start);
    if (connected(*pos, start)) pos = &pos2;
    *pos = right(start);
    if (connected(*pos, start)) pos = &pos2;
    *pos = down(start);
    if (connected(*pos, start)) pos = &pos2;

    // Trying to implement https://en.wikipedia.org/wiki/Shoelace_formula
    struct State
    {
        bool has_vertex = false;
        Pos_t first_vertex;
        Pos_t last_vertex;
        ssize_t accum = 0;
        ssize_t perimeter = 0;

        void update(const Pos_t& from, const Pos_t& to)
        {
            ++perimeter;
            char c = input[to.y][to.x];
            if (c != '-' && c != '|')
            {
                if (!has_vertex)
                {
                    has_vertex = true;
                    first_vertex = last_vertex = to;
                }
                else
                {
                    accum += (last_vertex.y + to.y) * (last_vertex.x - to.x);
                    last_vertex = to;
                }
            }
        }

        size_t result()
        {
            if (last_vertex != first_vertex)
            {
                accum += (last_vertex.y + first_vertex.y) * (last_vertex.x - first_vertex.x);
                last_vertex = first_vertex;
            }
            size_t total = std::abs(accum);
            return total > perimeter ? ((total - perimeter) / 2) + 1 : 0;
        }
    };

    State state;
    if (pos1.x != pos2.x && pos1.y != pos2.y)
    {
        state.last_vertex = state.first_vertex = start;
        state.has_vertex = true;
    }

    traverse(start, pos1, [&](const Pos_t& from, const Pos_t& to)
    {
        state.update(from, to);
    });

    return state.result();
}

int main()
{
    auto pos = find_start();
    std::cout << "Start pos: (" << pos.x << "," << pos.y << ")" << std::endl;
    std::cout << "Part 1:    " << part1() << std::endl;
    std::cout << "Part 2:    " << part2() << std::endl;
    return 0;
}
