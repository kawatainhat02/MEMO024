<<__EntryPoint>>
async function my_example(): Awaitable<void> {
  $user_ids = vec[1, 2, 3];

  // Initiate all the database requests together,
  // so we spend less time waiting.
  $user_names = await Vec\map_async(
    $user_ids,
    async ($id) ==> await fetch_user_name($id),
  );
  // Execution continues after requests complete.

  echo Str\join($user_names, ", ");
}

async function fetch_user_name(
  int $_,
): Awaitable<string> {
  // This could be a database request.
  return "";
}

class Box<T> {
  protected T $data;

  public function __construct(T $data) {
    $this->data = $data;
  }

  public function getData(): T {
    return $this->data;
  }
}

// Traditional: Risky and easy to misplace tags!
$user_name = 'Fred';
echo "<tt>Hello <strong>$user_name</tt></strong>";

// XHP: Typechecked, well-formed, and secure
$user_name = 'Fred';
$xhp = <tt>Hello <strong>{$user_name}</strong></tt>;
echo await $xhp->toStringAsync();
