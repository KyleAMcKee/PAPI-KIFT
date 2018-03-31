require "oauth2"
require 'colorize'

UID = "17b302849fcd4fbc8e58c7924e085ecff141092269b088df43e67bce87a75834"
SECRET = "087b14dce5ca20e588c5d60d1f3e54975247d0f4e15ad624a6f95c7fe5472a6d"

$client = OAuth2::Client.new(UID, SECRET, site: "https://api.intra.42.fr")
$token = $client.client_credentials.get_token

def location(login)
  begin
    response = $token.get("/v2/users/#{login}/locations")
    if !response.parsed[0]["end_at"]
		puts (login + ": " + response.parsed[0]["host"]).green
    else
		puts (login + ": (last login at location " + response.parsed[0]["host"] + ")").yellow
    end
  rescue
	  puts (login + ": invalid username").red
  end
end

if ARGV[0]
  if File.file?(ARGV[0]) and File.extname(ARGV[0]) == ".txt"
    file = File.open(ARGV[0], "r").each_line do |line|
      line == "\n" ? next : login = line.strip
      location(login)
    end
    file.close
  else
	  puts "Error, text file must have one login per line.".red
  end
else
	puts "Error, please include text.txt file.".red
end
