
message();
function message()
{
  var randomconvos = [
  'Oiier',
  'Aí sim',
  '!eta',
  '...foda...',
  '!putasso',
  'Oiier',
  'Aí sim',
  '!eta',
  '...foda...',
  '!putasso',
  'Oiier',
  'Aí sim',
  '!eta',
  '...foda...',
  '!putasso',
  'Oiier',
  'Aí sim',
  '!eta',
  '...foda...',
  '!putasso',
  'Oiier',
  'Aí sim',
  '!eta',
  '...foda...',
  '!putasso',
  'Oiier',
  'Aí sim',
  '!eta',
  '...foda...',
  '!putasso',
  'Oiier',
  'Aí sim',
  '!eta',
  '...foda...',
  '!putasso',
  'Oiier',
  'Aí sim',
  '!eta',
  '...foda...',
  '!putasso',

  ];
  var randomNumber = Math.floor(Math.random()*randomconvos.length);
  
  API.sendChat(randomconvos[randomNumber]);
  setTimeout(message, 120000);
}
