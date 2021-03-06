# re-tailwind
ReasonML utility to generate Tailwind classes

## Install

```
npm install --save re-tailwind
```

Add re-tailwind to `bs-dependencies` in `bsconfig.json`

## Usage

1. Ensure your app already import tailwind css

```reason
[%bs.raw {|require("tailwindcss/dist/tailwind.min.css")|}];
```

2. Use function TW.make to construct your tailwind classnames:

```reason
module Example = {
  [@react.component]
  let make = () => {
    <div className=TW.([Display(Flex), Float(FloatRight)] |> make)>
      {ReasonReact.string("Hello Example")}
    </div>;
  };
};

```

[More examples](../master/examples)

## Credits
- [Typed tailwind](https://github.com/dvkndn/typed-tailwind) which has the same purpose to this project but in TypeScript

## Next works:
- Tailwind PPX
- Auto generate ReasonML code for Tailwind CSS by user config

## License
[MIT](https://choosealicense.com/licenses/mit)
